//
//  NimbusFile.h
//  Nimbus
//
//  Created by Sagar Pandya on 2/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Cloud.h"

@interface NimbusFile : NSObject <NSURLDownloadDelegate>
{
    CLWebItem *itsCLWebItem;
    NSString *itsCachePath;
    NSData* data;
    BOOL isCachedToDisk;
    BOOL isCachedInMemory;

    NSFileHandle *itsFileHandle;
    unsigned long long currentOffset;
    unsigned long long totalFileLength;
}

@property (retain, nonatomic) CLWebItem *itsCLWebItem;
@property (retain, nonatomic) NSString *itsCachePath;
@property (retain, nonatomic) NSData* data;
@property (nonatomic) BOOL isCachedToDisk;
@property (nonatomic) BOOL isCachedInMemory;

- (NimbusFile *) initWithWebItem:(CLWebItem *)webItem andCachePath:(NSString *)path;
- (void) download;
- (void) cacheToMemory;
- (void) deleteFromMemory;

@end
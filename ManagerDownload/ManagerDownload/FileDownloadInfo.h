//
//  FileDownloadInfo.h
//  ManagerDownload
//
//  Created by QC_Test on 5/28/15.
//  Copyright (c) 2015 QC_Test. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileDownloadInfo : NSObject

@property (nonatomic, strong) NSString *fileTitle;

@property (nonatomic, strong) NSString *downloadSource;

@property (nonatomic, strong) NSURLSessionDownloadTask *downloadTask;

@property (nonatomic, strong) NSData *taskResumeData;

@property (nonatomic) double downloadProgress;

@property (nonatomic) BOOL isDownloading;

@property (nonatomic) BOOL downloadComplete;

@property (nonatomic) unsigned long taskIdentifier;


-(id)initWithFileTitle:(NSString *)title andDownloadSource:(NSString *)source;

@end

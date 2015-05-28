//
//  FileDownloadInfo.m
//  ManagerDownload
//
//  Created by QC_Test on 5/28/15.
//  Copyright (c) 2015 QC_Test. All rights reserved.
//

#import "FileDownloadInfo.h"

@implementation FileDownloadInfo

-(id)initWithFileTitle:(NSString *)title andDownloadSource:(NSString *)source
{
    if (self == [super init]) {
        self.fileTitle = title;
        self.downloadSource = source;
        self.downloadProgress = 0.0;
        self.isDownloading = NO;
        self.downloadComplete = NO;
        self.taskIdentifier = -1;
    }
    
    return self;
}
@end

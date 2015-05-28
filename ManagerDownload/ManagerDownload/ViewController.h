//
//  ViewController.h
//  ManagerDownload
//
//  Created by QC_Test on 5/28/15.
//  Copyright (c) 2015 QC_Test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FileDownloadInfo.h"

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NSURLSessionDelegate>

@property (nonatomic, strong) NSURLSession *session;

@property (nonatomic, strong) NSMutableArray *arrFileDownloadData;

@property (nonatomic, strong) NSURL *docDirectoryURL;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)startOrPauseDownloadingSingleFile:(id)sender;
- (IBAction)stopDownloading:(id)sender;
- (IBAction)startAllDownloads:(id)sender;
- (IBAction)stopAllDownloads:(id)sender;
- (IBAction)initializeAll:(id)sender;
-(void)initializeFileDownloadDataArray;

-(int)getFileDownloadInfoIndexWithTaskIdentifier:(unsigned long)taskIdentifier;

@end


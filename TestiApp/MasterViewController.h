//
//  MasterViewController.h
//  TestiApp
//
//  Created by DiegoMac on 04/05/14.
//  Copyright (c) 2014 DiegoMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

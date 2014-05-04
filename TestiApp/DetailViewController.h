//
//  DetailViewController.h
//  TestiApp
//
//  Created by DiegoMac on 04/05/14.
//  Copyright (c) 2014 DiegoMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

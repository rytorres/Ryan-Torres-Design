//
//  MasterViewController.h
//  Ryan Torres Design
//
//  Created by Ryan Torres on 8/24/12.
//  Copyright (c) 2012 Ryan Torres. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

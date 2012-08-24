//
//  DetailViewController.h
//  Ryan Torres Design
//
//  Created by Ryan Torres on 8/24/12.
//  Copyright (c) 2012 Ryan Torres. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

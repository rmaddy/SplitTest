//
//  MasterViewController.h
//  SplitTest
//
//  Created by Richard W Maddy on 6/30/19.
//  Copyright © 2019 Richard W Maddy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end


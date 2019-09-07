//
//  DetailViewController.h
//  SplitTest
//
//  Created by Richard W Maddy on 6/30/19.
//  Copyright © 2019 Richard W Maddy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


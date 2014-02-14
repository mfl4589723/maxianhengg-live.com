//
//  DetailViewController.h
//  maxianhengg@live.com
//
//  Created by mxh on 14-2-14.
//  Copyright (c) 2014年 mxh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

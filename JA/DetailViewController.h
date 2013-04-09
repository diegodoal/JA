//
//  DetailViewController.h
//  JA
//
//  Created by Diego Domínguez on 4/9/13.
//  Copyright (c) 2013 Diego Domínguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  MasterViewController.h
//  JA
//
//  Created by Diego Domínguez on 4/9/13.
//  Copyright (c) 2013 Diego Domínguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

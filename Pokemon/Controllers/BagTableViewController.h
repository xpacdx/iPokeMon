//
//  BagTableViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/6/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BagTableViewController : UITableViewController
{
  NSArray * bagItems_;
}

@property (nonatomic, copy) NSArray * bagItems;

@end

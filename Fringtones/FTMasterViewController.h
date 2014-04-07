//
//  FTMasterViewController.h
//  Fringtones
//
//  Created by Alex Agarkov on 4/7/14.
//  Copyright (c) 2014 Alex Agarkov. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

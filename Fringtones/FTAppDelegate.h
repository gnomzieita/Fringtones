//
//  FTAppDelegate.h
//  Fringtones
//
//  Created by Alex Agarkov on 4/7/14.
//  Copyright (c) 2014 Alex Agarkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

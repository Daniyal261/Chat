//
//  AppDelegate.h
//  Chat
//
//  Created by Adeel Ahmed on 05/10/2016.
//  Copyright © 2016 Adeel Ahmed. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


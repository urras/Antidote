//
//  CDMessageCall.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 14.08.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CDMessage;

@interface CDMessageCall : NSManagedObject

@property (nonatomic, retain) CDMessage *messageInverse;

@end

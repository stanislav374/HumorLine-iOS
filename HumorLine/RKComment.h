//
//  RKComment.h
//  HumorLine
//
//  Created by Yazhenskikh Stanislaw on 28.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RKPost;

@interface RKComment : NSManagedObject

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString * text;
@property (nonatomic) int64_t commentID;
@property (nonatomic, retain) RKPost *post;

@end
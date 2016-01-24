//
//  CsGoodtype.h
//  CustomerService
//
//  Created by System Administrator on 16/1/19.
//  Copyright © 2016年 cinvision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface CsGoodtype : NSObject

// Insert code here to declare functionality of your managed object subclass

@property (nonatomic, retain) NSNumber* goodtypeid;
@property (nonatomic, retain) NSNumber* parentid;
@property (nonatomic, retain) NSNumber* typeid;
@property (nonatomic, retain) NSString *typename;
@property (nonatomic, retain) NSString *defaultname;
@property ( nonatomic, retain) NSString *goodtypepath;

@end


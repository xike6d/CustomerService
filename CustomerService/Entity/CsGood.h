//
//  CsGood.h
//  CustomerService
//
//  Created by System Administrator on 16/1/19.
//  Copyright © 2016年 cinvision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "CsGoodtype.h"

@interface CsGood : NSObject

// Insert code here to declare functionality of your managed object subclass

@property (nonatomic, retain) NSNumber* goodid;
@property (nonatomic, retain) NSString *userguid;
@property (nonatomic, retain) NSNumber* goodtypeid;
@property (nonatomic, retain) NSString *goodname;
@property (nonatomic, retain) NSString *goodguid;
@property (nonatomic, retain) NSString *createtime;
@property (nonatomic, retain) NSString *dealtime;
@property (nonatomic, retain) NSString *endtime;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic, retain) NSString *sn;

@property (nonatomic, retain) CsGoodtype * goodtype;

@end


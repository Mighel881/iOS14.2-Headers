/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding> {

	NSMutableArray* _regionHistory;

}

@property (nonatomic,readonly) NSMutableArray * regionHistory;              //@synthesize regionHistory=_regionHistory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRegionVisits:(id)arg1 ;
-(id)getRegionVisits;
-(void)addRegionVisit:(id)arg1 ;
-(void)removeRegionVisit:(id)arg1 ;
-(void)removeAllRegionVisits;
-(id)getRegions;
-(NSMutableArray *)regionHistory;
@end

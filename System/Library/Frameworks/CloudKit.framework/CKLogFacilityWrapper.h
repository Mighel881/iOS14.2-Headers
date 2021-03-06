/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSString;

@interface CKLogFacilityWrapper : NSObject {

	NSObject*<OS_os_log> _facility;
	NSString* _facilityName;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,readonly) NSString * facilityName;                    //@synthesize facilityName=_facilityName - In the implementation block
-(NSObject*<OS_os_log>)facility;
-(NSString *)facilityName;
-(id)initWithFacility:(id)arg1 facilityName:(id)arg2 ;
@end


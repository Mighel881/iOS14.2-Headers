/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDate;

@interface WBSPerSitePreferenceValueInformation : NSObject {

	NSString* _domain;
	NSNumber* _value;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
-(id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3 ;
-(NSString *)domain;
-(NSNumber *)value;
-(NSDate *)creationDate;
@end


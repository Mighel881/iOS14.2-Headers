/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManagerCore/DOCFeatureState.h>

@class NSString;

@interface DOCFeatureStateFFSetting : DOCFeatureState {

	NSString* _domainID;
	NSString* _featureID;
	long long _valueMode;

}

@property (retain) NSString * domainID;               //@synthesize domainID=_domainID - In the implementation block
@property (retain) NSString * featureID;              //@synthesize featureID=_featureID - In the implementation block
@property (assign) long long valueMode;               //@synthesize valueMode=_valueMode - In the implementation block
-(void)setFeatureID:(NSString *)arg1 ;
-(NSString *)featureID;
-(id)initWithDomainID:(id)arg1 featureID:(id)arg2 valueMode:(long long)arg3 ;
-(NSString *)domainID;
-(void)setDomainID:(NSString *)arg1 ;
-(long long)valueMode;
-(void)setValueMode:(long long)arg1 ;
@end


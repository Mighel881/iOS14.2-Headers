/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInput/TIAnalyticsMetricsContext.h>

@class NSString, NSDictionary;

@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext {

	unsigned char _keyboardType;
	NSString* _layoutName;
	long long _userInterfaceIdiom;
	NSDictionary* _testingParameters;

}

@property (nonatomic,readonly) NSString * layoutName;                         //@synthesize layoutName=_layoutName - In the implementation block
@property (nonatomic,readonly) unsigned char keyboardType;                    //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long userInterfaceIdiom;                  //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) NSDictionary * testingParameters;              //@synthesize testingParameters=_testingParameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyboardTypeEnumToString:(unsigned char)arg1 ;
+(unsigned char)keyboardTypeStringToEnum:(id)arg1 ;
+(id)userInterfaceIdiomToString:(long long)arg1 ;
+(long long)userInterfaceIdiomStringToEnum:(id)arg1 ;
-(long long)userInterfaceIdiom;
-(NSString *)layoutName;
-(unsigned char)keyboardType;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyboardState:(id)arg1 ;
-(id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5 ;
-(id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5 testingParameters:(id)arg6 ;
-(id)initWithKeyboardState:(id)arg1 testingParameters:(id)arg2 ;
-(NSDictionary *)testingParameters;
@end


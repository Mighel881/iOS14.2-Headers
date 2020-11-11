/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DNDModeAssertionService, DNDStateService, NSString;

@interface DNDToggleManager : NSObject {

	DNDModeAssertionService* _modeAssertionService;
	DNDStateService* _stateService;
	NSString* _toggleAssertionIdentifier;

}

@property (nonatomic,copy) NSString * toggleAssertionIdentifier;              //@synthesize toggleAssertionIdentifier=_toggleAssertionIdentifier - In the implementation block
+(void)initialize;
+(id)managerForClientIdentifier:(id)arg1 ;
-(BOOL)_toggleDNDOffReturningError:(id*)arg1 ;
-(id)initWithModeAssertionService:(id)arg1 stateService:(id)arg2 ;
-(BOOL)_toggleDNDOnReturningError:(id*)arg1 ;
-(void)setToggleAssertionIdentifier:(NSString *)arg1 ;
-(NSString *)toggleAssertionIdentifier;
-(BOOL)toggleToTargetState:(unsigned long long)arg1 error:(id*)arg2 ;
@end

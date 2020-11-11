/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class SCRSchedulingConfiguration, NSString;

@interface SCRActivity : NSObject <NSCopying, BSDescriptionProviding, SCRSchedulable> {

	SCRSchedulingConfiguration* _schedulingConfiguration;
	NSString* _identifier;
	NSString* _name;
	/*^block*/id _activationBlock;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id activationBlock;                                      //@synthesize activationBlock=_activationBlock - In the implementation block
@property (copy) SCRSchedulingConfiguration * schedulingConfiguration;              //@synthesize schedulingConfiguration=_schedulingConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(id)initWithName:(id)arg1 ;
-(NSString *)description;
-(void)setActivationBlock:(id)arg1 ;
-(void)setSchedulingConfiguration:(SCRSchedulingConfiguration *)arg1 ;
-(id)activationBlock;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 earliestStartDate:(id)arg2 schedulingWindow:(double)arg3 activationBlock:(/*^block*/id)arg4 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

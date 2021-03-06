/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _experimentsByConfigurationIdentifier;

}

@property (nonatomic,readonly) AFExperiment*<AFExperimentForSiriVOXSounds> experimentForSiriVOXSounds; 
@property (nonatomic,readonly) AFExperiment*<AFExperimentForSiriVOXTapToSiriBehavior> experimentForSiriVOXTapToSiriBehavior; 
@property (nonatomic,readonly) AFExperiment*<AFInvocationFeedbackExperiment> invocationFeedbackExperiment; 
@property (nonatomic,copy,readonly) NSDictionary * experimentsByConfigurationIdentifier;                                                  //@synthesize experimentsByConfigurationIdentifier=_experimentsByConfigurationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)experimentsByConfigurationIdentifier;
-(AFExperiment*<AFExperimentForSiriVOXSounds>)experimentForSiriVOXSounds;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithExperimentsByConfigurationIdentifier:(id)arg1 ;
-(id)description;
-(AFExperiment*<AFInvocationFeedbackExperiment>)invocationFeedbackExperiment;
-(BOOL)isEqual:(id)arg1 ;
-(AFExperiment*<AFExperimentForSiriVOXTapToSiriBehavior>)experimentForSiriVOXTapToSiriBehavior;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


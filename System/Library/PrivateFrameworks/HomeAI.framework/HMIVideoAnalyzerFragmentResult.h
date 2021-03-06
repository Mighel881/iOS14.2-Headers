/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIVideoFragment, NSArray, HMIVideoAnalyzerResultOutcome, HMIVideoAnalyzerDynamicConfiguration, NSSet, NSString;

@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding> {

	HMIVideoFragment* _fragment;
	NSArray* _thumbnails;
	HMIVideoAnalyzerResultOutcome* _outcome;
	NSArray* _frameResults;
	HMIVideoAnalyzerDynamicConfiguration* _configuration;
	NSSet* _events;

}

@property (readonly) HMIVideoFragment * fragment;                                       //@synthesize fragment=_fragment - In the implementation block
@property (readonly) NSArray * thumbnails;                                              //@synthesize thumbnails=_thumbnails - In the implementation block
@property (readonly) HMIVideoAnalyzerResultOutcome * outcome;                           //@synthesize outcome=_outcome - In the implementation block
@property (readonly) NSArray * frameResults;                                            //@synthesize frameResults=_frameResults - In the implementation block
@property (readonly) HMIVideoAnalyzerDynamicConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSSet * events;                                                    //@synthesize events=_events - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSSet *)events;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)thumbnails;
-(HMIVideoAnalyzerResultOutcome *)outcome;
-(HMIVideoFragment *)fragment;
-(NSString *)description;
-(NSArray *)frameResults;
-(id)initWithCoder:(id)arg1 ;
-(HMIVideoAnalyzerDynamicConfiguration *)configuration;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(id)maxConfidenceEvents;
-(id)initWithFragment:(id)arg1 events:(id)arg2 frameResults:(id)arg3 thumbnails:(id)arg4 configuration:(id)arg5 outcome:(id)arg6 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKConceptSynthesizer : NSObject
+(id)synthesizeInMemoryConceptForCodingCollection:(id)arg1 ;
+(id)proritizedCodingSystemsForDisplay;
+(id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 ;
+(id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3 ;
+(id)adHocCodingForCodingCollection:(id)arg1 ;
+(id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)privateCodeCreationCodingSortDescriptors;
+(id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(/*^block*/id)arg3 ;
@end


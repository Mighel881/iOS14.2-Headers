/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {

	NSMutableDictionary* _generalConfigurations;
	NSMutableDictionary* _observationGroupConfigurations;

}
-(id)init;
-(unsigned long long)count;
-(id)allConfigurations;
-(id)configurationForRequest:(id)arg1 withObservationGroup:(id)arg2 withCompoundRequestRevision:(unsigned long long)arg3 ;
@end

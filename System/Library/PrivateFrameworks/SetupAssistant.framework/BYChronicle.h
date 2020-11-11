/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface BYChronicle : NSObject {

	NSMutableDictionary* _featureEntries;

}

@property (nonatomic,retain) NSMutableDictionary * featureEntries;              //@synthesize featureEntries=_featureEntries - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2 ;
-(NSMutableDictionary *)featureEntries;
-(void)recordFeatureShown:(unsigned long long)arg1 ;
-(id)entryForFeature:(unsigned long long)arg1 ;
-(void)setFeatureEntries:(NSMutableDictionary *)arg1 ;
@end

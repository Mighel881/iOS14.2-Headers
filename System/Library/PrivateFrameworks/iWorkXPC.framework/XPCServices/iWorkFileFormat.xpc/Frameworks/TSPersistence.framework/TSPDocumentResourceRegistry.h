/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface TSPDocumentResourceRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedRegistry;
-(id)init;
-(NSDictionary *)metadataDictionary;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(id)documentResourceInfosForTags:(id)arg1 ;
-(id)documentResourceInfoForDigestString:(id)arg1 locator:(id)arg2 ;
-(id)localStrategyProviderForDocumentResourceInfos:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
@end


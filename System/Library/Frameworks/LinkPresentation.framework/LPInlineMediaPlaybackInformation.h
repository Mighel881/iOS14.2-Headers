/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSURL, LPAudio;

@interface LPInlineMediaPlaybackInformation : NSObject {

	unsigned long long _type;
	NSString* _storeIdentifier;
	NSString* _storefrontIdentifier;
	NSArray* _offers;
	NSURL* _previewURL;
	NSString* _persistentIdentifier;
	LPAudio* _audio;

}

@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (nonatomic,readonly) BOOL isAvailableForAnonymousDownload; 
@property (nonatomic,copy) NSURL * previewURL;                                    //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) LPAudio * audio;                                     //@synthesize audio=_audio - In the implementation block
-(unsigned long long)availability;
-(NSString *)storefrontIdentifier;
-(NSString *)storeIdentifier;
-(LPAudio *)audio;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSArray *)offers;
-(void)setAudio:(LPAudio *)arg1 ;
-(unsigned long long)type;
-(BOOL)isAvailableForAnonymousDownload;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(NSURL *)previewURL;
@end


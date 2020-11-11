/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKCloudServiceController, NSMapTable, NSString;

@interface LPiTunesStoreInformation : NSObject {

	SKCloudServiceController* _cloudServiceController;
	NSMapTable* _changeHandlers;
	unsigned long long _capabilities;
	BOOL _hasUpdatedCapabilities;
	NSString* _storefrontIdentifier;

}

@property (readonly) unsigned long long capabilities; 
@property (copy,readonly) NSString * storefrontIdentifier; 
+(id)shared;
+(unsigned long long)_convertCapabilities:(unsigned long long)arg1 ;
+(id)_convertNewStorefrontIdentifier:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(unsigned long long)capabilities;
-(id)init;
-(void)_setCapabilities:(unsigned long long)arg1 ;
-(void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterForStoreAvailablityChangesWithToken:(id)arg1 ;
-(unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1 ;
-(void)_setStorefrontIdentifier:(id)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)_capabilitiesDidChangeNotification;
-(void)_notifyChangeHandlers;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PUEditPluginManager : NSObject {

	unsigned long long _mediaType;
	NSArray* __plugins;

}

@property (setter=_setPlugins:,nonatomic,copy) NSArray * _plugins;              //@synthesize _plugins=__plugins - In the implementation block
@property (readonly) unsigned long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
+(id)sharedManagerForMediaType:(unsigned long long)arg1 ;
-(NSArray *)_plugins;
-(unsigned long long)mediaType;
-(BOOL)hasPlugins;
-(id)pluginActivities;
-(id)_initWithMediaType:(unsigned long long)arg1 ;
-(id)_allowedPluginTypes;
-(void)rediscoverAvailablePlugins;
-(void)_discoveredAvailableExtensions:(id)arg1 ;
-(void)_setPlugins:(id)arg1 ;
@end

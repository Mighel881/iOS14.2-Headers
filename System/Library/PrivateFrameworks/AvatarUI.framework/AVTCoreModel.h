/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, AVTEditingModelColors;

@interface AVTCoreModel : NSObject {

	NSArray* _groups;
	AVTEditingModelColors* _colors;
	unsigned long long _platform;

}

@property (nonatomic,copy,readonly) NSArray * groups;                            //@synthesize groups=_groups - In the implementation block
@property (nonatomic,copy,readonly) AVTEditingModelColors * colors;              //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                      //@synthesize platform=_platform - In the implementation block
-(unsigned long long)platform;
-(id)initWithGroups:(id)arg1 colors:(id)arg2 forPlatform:(unsigned long long)arg3 ;
-(id)description;
-(AVTEditingModelColors *)colors;
-(NSArray *)groups;
@end

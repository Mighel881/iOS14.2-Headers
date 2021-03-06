/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MKInfoCardTheme;
@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;

@interface MKPlaceReviewAvatarGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _cachedMaskedImages;
	id<MKInfoCardTheme> _theme;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic,__weak) id<MKInfoCardTheme> theme;                 //@synthesize theme=_theme - In the implementation block
-(id)init;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(void)monogramForReviewerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)avatarForReview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<MKInfoCardTheme>)theme;
-(void)setTheme:(id<MKInfoCardTheme>)arg1 ;
@end


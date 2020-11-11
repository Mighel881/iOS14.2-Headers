/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PRMonogramColor, CNPhotoPickerColorVariant;

@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject {

	PRMonogramColor* _monogramColor;
	CNPhotoPickerColorVariant* _animojiColor;

}

@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiColor;              //@synthesize animojiColor=_animojiColor - In the implementation block
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(void)setAnimojiColor:(CNPhotoPickerColorVariant *)arg1 ;
-(CNPhotoPickerColorVariant *)animojiColor;
-(PRMonogramColor *)monogramColor;
@end

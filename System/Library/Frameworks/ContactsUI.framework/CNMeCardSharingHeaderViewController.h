/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class CNMeCardSharingAvatarViewController, NSString, CNMeCardSharingPickerLayoutAttributes, UILabel;

@interface CNMeCardSharingHeaderViewController : UIViewController {

	CNMeCardSharingAvatarViewController* _avatarViewController;
	NSString* _name;
	unsigned long long _mode;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) CNMeCardSharingAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                     //@synthesize nameLabel=_nameLabel - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)setNameLabel:(UILabel *)arg1 ;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)viewDidLoad;
-(double)desiredHeight;
-(void)setAvatarViewController:(CNMeCardSharingAvatarViewController *)arg1 ;
-(id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3 ;
-(CNMeCardSharingAvatarViewController *)avatarViewController;
-(UILabel *)nameLabel;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)setName:(NSString *)arg1 ;
@end


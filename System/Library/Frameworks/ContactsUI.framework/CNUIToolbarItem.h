/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CNUIToolbarItem : NSObject {

	BOOL _isDefault;
	BOOL _isCancel;
	NSString* _title;
	/*^block*/id _actionBlock;

}

@property (assign,nonatomic) BOOL isDefault;              //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) BOOL isCancel;               //@synthesize isCancel=_isCancel - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id actionBlock;                //@synthesize actionBlock=_actionBlock - In the implementation block
-(BOOL)isCancel;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setIsCancel:(BOOL)arg1 ;
-(void)setActionBlock:(id)arg1 ;
-(BOOL)isDefault;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)actionBlock;
@end


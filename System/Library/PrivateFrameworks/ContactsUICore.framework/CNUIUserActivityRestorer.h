/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUIUserActivityRestorerDelegate;
@class CNContactStore;

@interface CNUIUserActivityRestorer : NSObject {

	id<CNUIUserActivityRestorerDelegate> _delegate;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIUserActivityRestorerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)log;
-(id<CNUIUserActivityRestorerDelegate>)delegate;
-(CNContactStore *)contactStore;
-(void)setDelegate:(id<CNUIUserActivityRestorerDelegate>)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1 ;
-(BOOL)restoreUserActivity:(id)arg1 ;
@end

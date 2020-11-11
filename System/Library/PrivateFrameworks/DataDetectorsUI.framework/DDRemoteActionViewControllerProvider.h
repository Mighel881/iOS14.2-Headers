/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DDRemoteActionContext;

@interface DDRemoteActionViewControllerProvider : NSObject {

	DDRemoteActionContext* _actionContext;

}

@property (readonly) DDRemoteActionContext * actionContext;              //@synthesize actionContext=_actionContext - In the implementation block
-(DDRemoteActionContext *)actionContext;
-(id)initWithContext:(id)arg1 ;
-(void)createViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
@end

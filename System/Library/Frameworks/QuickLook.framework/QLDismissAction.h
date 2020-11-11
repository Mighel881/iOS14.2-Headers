/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface QLDismissAction : NSObject {

	BOOL _shouldDismissQuickLookAutomatically;
	NSString* _title;
	/*^block*/id _completionHandler;
	long long _alertStyle;

}

@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long alertStyle;                                  //@synthesize alertStyle=_alertStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissQuickLookAutomatically;              //@synthesize shouldDismissQuickLookAutomatically=_shouldDismissQuickLookAutomatically - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)setAlertStyle:(long long)arg1 ;
-(id)completionHandler;
-(NSString *)title;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)alertStyle;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)shouldDismissQuickLookAutomatically;
-(void)setShouldDismissQuickLookAutomatically:(BOOL)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, UIImage;

@interface _SFClipLink : NSObject {

	NSURL* _url;
	NSString* _bundleIdentifier;
	NSString* _clipName;
	NSString* _appName;
	NSString* _actionTitle;
	NSString* _actionCaption;
	UIImage* _icon;

}

@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clipName;                      //@synthesize clipName=_clipName - In the implementation block
@property (nonatomic,copy) NSString * appName;                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                   //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionCaption;                 //@synthesize actionCaption=_actionCaption - In the implementation block
@property (nonatomic,retain) UIImage * icon;                         //@synthesize icon=_icon - In the implementation block
+(double)iconHeight;
+(id)localizedUppercaseStringForAction:(long long)arg1 ;
+(id)localizedCaptionForClipNamed:(id)arg1 action:(long long)arg2 ;
-(NSString *)appName;
-(NSURL *)url;
-(UIImage *)icon;
-(NSString *)bundleIdentifier;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 actionTitle:(id)arg3 ;
-(NSString *)actionTitle;
-(void)setAppName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)clipName;
-(NSString *)actionCaption;
-(void)getClipAttributesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setClipName:(NSString *)arg1 ;
-(void)setActionCaption:(NSString *)arg1 ;
@end


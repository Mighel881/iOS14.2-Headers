/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString;

@interface MKPublisherIcon : NSObject {

	UIImage* _publisherImage;
	NSString* _publisherName;

}

@property (nonatomic,readonly) UIImage * publisherImage;              //@synthesize publisherImage=_publisherImage - In the implementation block
@property (nonatomic,readonly) NSString * publisherName;              //@synthesize publisherName=_publisherName - In the implementation block
-(NSString *)publisherName;
-(id)initUsingName:(id)arg1 andImage:(id)arg2 ;
-(UIImage *)publisherImage;
@end

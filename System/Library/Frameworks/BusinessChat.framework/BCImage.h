/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSDictionary, UIImage;

@interface BCImage : NSObject {

	NSData* _imageData;
	NSString* _identifier;
	NSString* _imageDescription;

}

@property (nonatomic,retain) NSData * imageData;                            //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) UIImage * image; 
-(NSString *)identifier;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)imageData;
-(NSDictionary *)dictionaryValue;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
@end


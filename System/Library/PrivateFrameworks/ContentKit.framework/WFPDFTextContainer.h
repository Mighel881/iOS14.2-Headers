/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@class NSMutableString, NSString;

@interface WFPDFTextContainer : NSObject {

	NSMutableString* _string;
	CGAffineTransform _transform;

}

@property (nonatomic,retain) NSMutableString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) NSString * text; 
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(CGAffineTransform)transform;
-(NSString *)text;
-(void)setString:(NSMutableString *)arg1 ;
-(NSMutableString *)string;
-(void)addOperator:(id)arg1 ;
-(long long)compareTransformToTextContainer:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionURLPrivateVars, NSURL;

@interface PDFActionURL : PDFAction <NSCopying> {

	PDFActionURLPrivateVars* _private2;

}

@property (getter=isSuspiciousURL,nonatomic,readonly) BOOL suspiciousURL; 
@property (nonatomic,copy) NSURL * URL; 
-(id)initWithURL:(id)arg1 ;
-(void)commonInit;
-(id)description;
-(void)setURL:(NSURL *)arg1 ;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(const CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(BOOL)isSuspiciousURL;
@end


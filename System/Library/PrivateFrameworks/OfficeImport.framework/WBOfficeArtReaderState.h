/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;
	WXReadState* mXmlDocumentState;

}

@property (assign,nonatomic,__weak) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(id)xmlDrawingState;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
@end


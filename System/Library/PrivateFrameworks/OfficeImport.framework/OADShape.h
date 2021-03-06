/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;
	OADOrientedBounds* mTextOrientedBounds;

}

@property (nonatomic,retain) OADOrientedBounds * textOrientedBounds; 
-(void)setGeometry:(id)arg1 ;
-(id)init;
-(id)textBody;
-(id)description;
-(int)type;
-(id)geometry;
-(void)setTextBody:(id)arg1 ;
-(id)shapeStyle;
-(id)shapeProperties;
-(BOOL)isTextBox;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flattenProperties;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(OADOrientedBounds *)textOrientedBounds;
-(void)setTextOrientedBounds:(OADOrientedBounds *)arg1 ;
@end


//
//  RBBomParser.h
//  RBBomReaderEngine
//
//  Created by Earus on 1/24/11.
//  Copyright 2011 YUTAR. All rights reserved.
//

@class RBBomDataReader;
@class RBBomTagNode;

@interface RBBomParser : NSObject

@property (nonatomic, readonly) RBBomTagNode *rootNode;

- (id)initWithReader:(RBBomDataReader*)reader;

- (void)parse;

+ (NSString *)removeTag:(NSString *)plainText;

@end

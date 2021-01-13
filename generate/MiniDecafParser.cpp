
// Generated from MiniDecaf.g4 by ANTLR 4.8


#include "MiniDecafVisitor.h"

#include "MiniDecafParser.h"


using namespace antlrcpp;
using namespace antlr4;

MiniDecafParser::MiniDecafParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MiniDecafParser::~MiniDecafParser() {
  delete _interpreter;
}

std::string MiniDecafParser::getGrammarFileName() const {
  return "MiniDecaf.g4";
}

const std::vector<std::string>& MiniDecafParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MiniDecafParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

MiniDecafParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniDecafParser::ProgContext::EOF() {
  return getToken(MiniDecafParser::EOF, 0);
}

std::vector<MiniDecafParser::FuncContext *> MiniDecafParser::ProgContext::func() {
  return getRuleContexts<MiniDecafParser::FuncContext>();
}

MiniDecafParser::FuncContext* MiniDecafParser::ProgContext::func(size_t i) {
  return getRuleContext<MiniDecafParser::FuncContext>(i);
}

std::vector<MiniDecafParser::GlobalDeclContext *> MiniDecafParser::ProgContext::globalDecl() {
  return getRuleContexts<MiniDecafParser::GlobalDeclContext>();
}

MiniDecafParser::GlobalDeclContext* MiniDecafParser::ProgContext::globalDecl(size_t i) {
  return getRuleContext<MiniDecafParser::GlobalDeclContext>(i);
}

std::vector<tree::TerminalNode *> MiniDecafParser::ProgContext::Semicolon() {
  return getTokens(MiniDecafParser::Semicolon);
}

tree::TerminalNode* MiniDecafParser::ProgContext::Semicolon(size_t i) {
  return getToken(MiniDecafParser::Semicolon, i);
}


size_t MiniDecafParser::ProgContext::getRuleIndex() const {
  return MiniDecafParser::RuleProg;
}


antlrcpp::Any MiniDecafParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::ProgContext* MiniDecafParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MiniDecafParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniDecafParser::Int) {
      setState(36);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(32);
        func();
        break;
      }

      case 2: {
        setState(33);
        globalDecl();
        setState(34);
        match(MiniDecafParser::Semicolon);
        break;
      }

      }
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(41);
    match(MiniDecafParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

MiniDecafParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniDecafParser::TypeContext *> MiniDecafParser::FuncContext::type() {
  return getRuleContexts<MiniDecafParser::TypeContext>();
}

MiniDecafParser::TypeContext* MiniDecafParser::FuncContext::type(size_t i) {
  return getRuleContext<MiniDecafParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> MiniDecafParser::FuncContext::Identifier() {
  return getTokens(MiniDecafParser::Identifier);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Identifier(size_t i) {
  return getToken(MiniDecafParser::Identifier, i);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Lbrace() {
  return getToken(MiniDecafParser::Lbrace, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Rbrace() {
  return getToken(MiniDecafParser::Rbrace, 0);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

std::vector<tree::TerminalNode *> MiniDecafParser::FuncContext::Comma() {
  return getTokens(MiniDecafParser::Comma);
}

tree::TerminalNode* MiniDecafParser::FuncContext::Comma(size_t i) {
  return getToken(MiniDecafParser::Comma, i);
}

std::vector<MiniDecafParser::BlockItemContext *> MiniDecafParser::FuncContext::blockItem() {
  return getRuleContexts<MiniDecafParser::BlockItemContext>();
}

MiniDecafParser::BlockItemContext* MiniDecafParser::FuncContext::blockItem(size_t i) {
  return getRuleContext<MiniDecafParser::BlockItemContext>(i);
}


size_t MiniDecafParser::FuncContext::getRuleIndex() const {
  return MiniDecafParser::RuleFunc;
}


antlrcpp::Any MiniDecafParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::FuncContext* MiniDecafParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 2, MiniDecafParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(43);
    type();
    setState(44);
    match(MiniDecafParser::Identifier);
    setState(45);
    match(MiniDecafParser::Lparen);
    setState(52);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(46);
        type();
        setState(47);
        match(MiniDecafParser::Identifier);
        setState(48);
        match(MiniDecafParser::Comma); 
      }
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniDecafParser::Int) {
      setState(55);
      type();
      setState(56);
      match(MiniDecafParser::Identifier);
    }
    setState(60);
    match(MiniDecafParser::Rparen);
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniDecafParser::Lbrace: {
        setState(61);
        match(MiniDecafParser::Lbrace);
        setState(65);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::Int)
          | (1ULL << MiniDecafParser::Return)
          | (1ULL << MiniDecafParser::If)
          | (1ULL << MiniDecafParser::For)
          | (1ULL << MiniDecafParser::While)
          | (1ULL << MiniDecafParser::Do)
          | (1ULL << MiniDecafParser::Break)
          | (1ULL << MiniDecafParser::Continue)
          | (1ULL << MiniDecafParser::Lparen)
          | (1ULL << MiniDecafParser::Lbrace)
          | (1ULL << MiniDecafParser::Semicolon)
          | (1ULL << MiniDecafParser::Minus)
          | (1ULL << MiniDecafParser::Exclamation)
          | (1ULL << MiniDecafParser::Tilde)
          | (1ULL << MiniDecafParser::Multiplication)
          | (1ULL << MiniDecafParser::AND)
          | (1ULL << MiniDecafParser::Integer)
          | (1ULL << MiniDecafParser::Identifier))) != 0)) {
          setState(62);
          blockItem();
          setState(67);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(68);
        match(MiniDecafParser::Rbrace);
        break;
      }

      case MiniDecafParser::Semicolon: {
        setState(69);
        match(MiniDecafParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

MiniDecafParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniDecafParser::StmtContext* MiniDecafParser::BlockItemContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::DeclarationContext* MiniDecafParser::BlockItemContext::declaration() {
  return getRuleContext<MiniDecafParser::DeclarationContext>(0);
}

tree::TerminalNode* MiniDecafParser::BlockItemContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}


size_t MiniDecafParser::BlockItemContext::getRuleIndex() const {
  return MiniDecafParser::RuleBlockItem;
}


antlrcpp::Any MiniDecafParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::BlockItemContext* MiniDecafParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 4, MiniDecafParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniDecafParser::Return:
      case MiniDecafParser::If:
      case MiniDecafParser::For:
      case MiniDecafParser::While:
      case MiniDecafParser::Do:
      case MiniDecafParser::Break:
      case MiniDecafParser::Continue:
      case MiniDecafParser::Lparen:
      case MiniDecafParser::Lbrace:
      case MiniDecafParser::Semicolon:
      case MiniDecafParser::Minus:
      case MiniDecafParser::Exclamation:
      case MiniDecafParser::Tilde:
      case MiniDecafParser::Multiplication:
      case MiniDecafParser::AND:
      case MiniDecafParser::Integer:
      case MiniDecafParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        stmt();
        break;
      }

      case MiniDecafParser::Int: {
        enterOuterAlt(_localctx, 2);
        setState(73);
        declaration();
        setState(74);
        match(MiniDecafParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalDeclContext ------------------------------------------------------------------

MiniDecafParser::GlobalDeclContext::GlobalDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::GlobalDeclContext::getRuleIndex() const {
  return MiniDecafParser::RuleGlobalDecl;
}

void MiniDecafParser::GlobalDeclContext::copyFrom(GlobalDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GlobalContext ------------------------------------------------------------------

MiniDecafParser::TypeContext* MiniDecafParser::GlobalContext::type() {
  return getRuleContext<MiniDecafParser::TypeContext>(0);
}

tree::TerminalNode* MiniDecafParser::GlobalContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

tree::TerminalNode* MiniDecafParser::GlobalContext::Integer() {
  return getToken(MiniDecafParser::Integer, 0);
}

MiniDecafParser::GlobalContext::GlobalContext(GlobalDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::GlobalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitGlobal(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::GlobalDeclContext* MiniDecafParser::globalDecl() {
  GlobalDeclContext *_localctx = _tracker.createInstance<GlobalDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, MiniDecafParser::RuleGlobalDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<GlobalDeclContext *>(_tracker.createInstance<MiniDecafParser::GlobalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(78);
    type();
    setState(79);
    match(MiniDecafParser::Identifier);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniDecafParser::T__0) {
      setState(80);
      match(MiniDecafParser::T__0);
      setState(81);
      match(MiniDecafParser::Integer);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

MiniDecafParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::DeclarationContext::getRuleIndex() const {
  return MiniDecafParser::RuleDeclaration;
}

void MiniDecafParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDefineContext ------------------------------------------------------------------

MiniDecafParser::TypeContext* MiniDecafParser::VarDefineContext::type() {
  return getRuleContext<MiniDecafParser::TypeContext>(0);
}

tree::TerminalNode* MiniDecafParser::VarDefineContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::VarDefineContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

MiniDecafParser::VarDefineContext::VarDefineContext(DeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::VarDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitVarDefine(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::DeclarationContext* MiniDecafParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, MiniDecafParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<MiniDecafParser::VarDefineContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(84);
    type();
    setState(85);
    match(MiniDecafParser::Identifier);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniDecafParser::T__0) {
      setState(86);
      match(MiniDecafParser::T__0);
      setState(87);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

MiniDecafParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::StmtContext::getRuleIndex() const {
  return MiniDecafParser::RuleStmt;
}

void MiniDecafParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RetStmtContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::RetStmtContext::Return() {
  return getToken(MiniDecafParser::Return, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::RetStmtContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::RetStmtContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::RetStmtContext::RetStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::RetStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitRetStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ExprStmtContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::ExprStmtContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

MiniDecafParser::ExprStmtContext::ExprStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileLoopContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::WhileLoopContext::While() {
  return getToken(MiniDecafParser::While, 0);
}

tree::TerminalNode* MiniDecafParser::WhileLoopContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::WhileLoopContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::WhileLoopContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::WhileLoopContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::WhileLoopContext::WhileLoopContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoWhileContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::DoWhileContext::Do() {
  return getToken(MiniDecafParser::Do, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::DoWhileContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::While() {
  return getToken(MiniDecafParser::While, 0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::DoWhileContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

tree::TerminalNode* MiniDecafParser::DoWhileContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::DoWhileContext::DoWhileContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::DoWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitDoWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::BreakContext::Break() {
  return getToken(MiniDecafParser::Break, 0);
}

tree::TerminalNode* MiniDecafParser::BreakContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::BreakContext::BreakContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ContinueContext::Continue() {
  return getToken(MiniDecafParser::Continue, 0);
}

tree::TerminalNode* MiniDecafParser::ContinueContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::ContinueContext::ContinueContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ContinueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitContinue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::BlockContext::Lbrace() {
  return getToken(MiniDecafParser::Lbrace, 0);
}

tree::TerminalNode* MiniDecafParser::BlockContext::Rbrace() {
  return getToken(MiniDecafParser::Rbrace, 0);
}

std::vector<MiniDecafParser::BlockItemContext *> MiniDecafParser::BlockContext::blockItem() {
  return getRuleContexts<MiniDecafParser::BlockItemContext>();
}

MiniDecafParser::BlockItemContext* MiniDecafParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<MiniDecafParser::BlockItemContext>(i);
}

MiniDecafParser::BlockContext::BlockContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IfElseContext::If() {
  return getToken(MiniDecafParser::If, 0);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::IfElseContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

std::vector<MiniDecafParser::StmtContext *> MiniDecafParser::IfElseContext::stmt() {
  return getRuleContexts<MiniDecafParser::StmtContext>();
}

MiniDecafParser::StmtContext* MiniDecafParser::IfElseContext::stmt(size_t i) {
  return getRuleContext<MiniDecafParser::StmtContext>(i);
}

tree::TerminalNode* MiniDecafParser::IfElseContext::Else() {
  return getToken(MiniDecafParser::Else, 0);
}

MiniDecafParser::IfElseContext::IfElseContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForLoopContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ForLoopContext::For() {
  return getToken(MiniDecafParser::For, 0);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

std::vector<tree::TerminalNode *> MiniDecafParser::ForLoopContext::Semicolon() {
  return getTokens(MiniDecafParser::Semicolon);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Semicolon(size_t i) {
  return getToken(MiniDecafParser::Semicolon, i);
}

tree::TerminalNode* MiniDecafParser::ForLoopContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::StmtContext* MiniDecafParser::ForLoopContext::stmt() {
  return getRuleContext<MiniDecafParser::StmtContext>(0);
}

MiniDecafParser::DeclarationContext* MiniDecafParser::ForLoopContext::declaration() {
  return getRuleContext<MiniDecafParser::DeclarationContext>(0);
}

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::ForLoopContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::ForLoopContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

MiniDecafParser::ForLoopContext::ForLoopContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SemicolonContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::SemicolonContext::Semicolon() {
  return getToken(MiniDecafParser::Semicolon, 0);
}

MiniDecafParser::SemicolonContext::SemicolonContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::SemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitSemicolon(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::StmtContext* MiniDecafParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, MiniDecafParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::RetStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(90);
      match(MiniDecafParser::Return);
      setState(91);
      expr();
      setState(92);
      match(MiniDecafParser::Semicolon);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ExprStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(95);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
        | (1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND)
        | (1ULL << MiniDecafParser::Integer)
        | (1ULL << MiniDecafParser::Identifier))) != 0)) {
        setState(94);
        expr();
      }
      setState(97);
      match(MiniDecafParser::Semicolon);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(98);
      match(MiniDecafParser::If);
      setState(99);
      match(MiniDecafParser::Lparen);
      setState(100);
      expr();
      setState(101);
      match(MiniDecafParser::Rparen);
      setState(102);
      stmt();
      setState(105);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(103);
        match(MiniDecafParser::Else);
        setState(104);
        stmt();
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::BlockContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(107);
      match(MiniDecafParser::Lbrace);
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Int)
        | (1ULL << MiniDecafParser::Return)
        | (1ULL << MiniDecafParser::If)
        | (1ULL << MiniDecafParser::For)
        | (1ULL << MiniDecafParser::While)
        | (1ULL << MiniDecafParser::Do)
        | (1ULL << MiniDecafParser::Break)
        | (1ULL << MiniDecafParser::Continue)
        | (1ULL << MiniDecafParser::Lparen)
        | (1ULL << MiniDecafParser::Lbrace)
        | (1ULL << MiniDecafParser::Semicolon)
        | (1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND)
        | (1ULL << MiniDecafParser::Integer)
        | (1ULL << MiniDecafParser::Identifier))) != 0)) {
        setState(108);
        blockItem();
        setState(113);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(114);
      match(MiniDecafParser::Rbrace);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ForLoopContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(115);
      match(MiniDecafParser::For);
      setState(116);
      match(MiniDecafParser::Lparen);
      setState(119);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MiniDecafParser::Int: {
          setState(117);
          declaration();
          break;
        }

        case MiniDecafParser::Lparen:
        case MiniDecafParser::Minus:
        case MiniDecafParser::Exclamation:
        case MiniDecafParser::Tilde:
        case MiniDecafParser::Multiplication:
        case MiniDecafParser::AND:
        case MiniDecafParser::Integer:
        case MiniDecafParser::Identifier: {
          setState(118);
          expr();
          break;
        }

        case MiniDecafParser::Semicolon: {
          break;
        }

      default:
        break;
      }
      setState(121);
      match(MiniDecafParser::Semicolon);
      setState(123);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
        | (1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND)
        | (1ULL << MiniDecafParser::Integer)
        | (1ULL << MiniDecafParser::Identifier))) != 0)) {
        setState(122);
        expr();
      }
      setState(125);
      match(MiniDecafParser::Semicolon);
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
        | (1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND)
        | (1ULL << MiniDecafParser::Integer)
        | (1ULL << MiniDecafParser::Identifier))) != 0)) {
        setState(126);
        expr();
      }
      setState(129);
      match(MiniDecafParser::Rparen);
      setState(130);
      stmt();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::WhileLoopContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(131);
      match(MiniDecafParser::While);
      setState(132);
      match(MiniDecafParser::Lparen);
      setState(133);
      expr();
      setState(134);
      match(MiniDecafParser::Rparen);
      setState(135);
      stmt();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::DoWhileContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(137);
      match(MiniDecafParser::Do);
      setState(138);
      stmt();
      setState(139);
      match(MiniDecafParser::While);
      setState(140);
      match(MiniDecafParser::Lparen);
      setState(141);
      expr();
      setState(142);
      match(MiniDecafParser::Rparen);
      setState(143);
      match(MiniDecafParser::Semicolon);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::BreakContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(145);
      match(MiniDecafParser::Break);
      setState(146);
      match(MiniDecafParser::Semicolon);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::ContinueContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(147);
      match(MiniDecafParser::Continue);
      setState(148);
      match(MiniDecafParser::Semicolon);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MiniDecafParser::SemicolonContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(149);
      match(MiniDecafParser::Semicolon);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MiniDecafParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::ExprContext::getRuleIndex() const {
  return MiniDecafParser::RuleExpr;
}

void MiniDecafParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CondContext ------------------------------------------------------------------

MiniDecafParser::ConditionalContext* MiniDecafParser::CondContext::conditional() {
  return getRuleContext<MiniDecafParser::ConditionalContext>(0);
}

MiniDecafParser::CondContext::CondContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

MiniDecafParser::UnaryContext* MiniDecafParser::AssignContext::unary() {
  return getRuleContext<MiniDecafParser::UnaryContext>(0);
}

MiniDecafParser::ExprContext* MiniDecafParser::AssignContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

MiniDecafParser::AssignContext::AssignContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::ExprContext* MiniDecafParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 12, MiniDecafParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<MiniDecafParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(152);
      unary();
      setState(153);
      match(MiniDecafParser::T__0);
      setState(154);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<MiniDecafParser::CondContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(156);
      conditional();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

MiniDecafParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::ConditionalContext::getRuleIndex() const {
  return MiniDecafParser::RuleConditional;
}

void MiniDecafParser::ConditionalContext::copyFrom(ConditionalContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CondExprContext ------------------------------------------------------------------

MiniDecafParser::Logical_orContext* MiniDecafParser::CondExprContext::logical_or() {
  return getRuleContext<MiniDecafParser::Logical_orContext>(0);
}

tree::TerminalNode* MiniDecafParser::CondExprContext::Question() {
  return getToken(MiniDecafParser::Question, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::CondExprContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::CondExprContext::Colon() {
  return getToken(MiniDecafParser::Colon, 0);
}

MiniDecafParser::ConditionalContext* MiniDecafParser::CondExprContext::conditional() {
  return getRuleContext<MiniDecafParser::ConditionalContext>(0);
}

MiniDecafParser::CondExprContext::CondExprContext(ConditionalContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CondExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCondExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Lor_opContext ------------------------------------------------------------------

MiniDecafParser::Logical_orContext* MiniDecafParser::Lor_opContext::logical_or() {
  return getRuleContext<MiniDecafParser::Logical_orContext>(0);
}

MiniDecafParser::Lor_opContext::Lor_opContext(ConditionalContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Lor_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLor_op(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::ConditionalContext* MiniDecafParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 14, MiniDecafParser::RuleConditional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ConditionalContext *>(_tracker.createInstance<MiniDecafParser::CondExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(159);
      logical_or(0);
      setState(160);
      match(MiniDecafParser::Question);
      setState(161);
      expr();
      setState(162);
      match(MiniDecafParser::Colon);
      setState(163);
      conditional();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ConditionalContext *>(_tracker.createInstance<MiniDecafParser::Lor_opContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(165);
      logical_or(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_orContext ------------------------------------------------------------------

MiniDecafParser::Logical_orContext::Logical_orContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::Logical_orContext::getRuleIndex() const {
  return MiniDecafParser::RuleLogical_or;
}

void MiniDecafParser::Logical_orContext::copyFrom(Logical_orContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Land_opContext ------------------------------------------------------------------

MiniDecafParser::Logical_andContext* MiniDecafParser::Land_opContext::logical_and() {
  return getRuleContext<MiniDecafParser::Logical_andContext>(0);
}

MiniDecafParser::Land_opContext::Land_opContext(Logical_orContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Land_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLand_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LorContext ------------------------------------------------------------------

std::vector<MiniDecafParser::Logical_orContext *> MiniDecafParser::LorContext::logical_or() {
  return getRuleContexts<MiniDecafParser::Logical_orContext>();
}

MiniDecafParser::Logical_orContext* MiniDecafParser::LorContext::logical_or(size_t i) {
  return getRuleContext<MiniDecafParser::Logical_orContext>(i);
}

tree::TerminalNode* MiniDecafParser::LorContext::LOR() {
  return getToken(MiniDecafParser::LOR, 0);
}

MiniDecafParser::LorContext::LorContext(Logical_orContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::LorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLor(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::Logical_orContext* MiniDecafParser::logical_or() {
   return logical_or(0);
}

MiniDecafParser::Logical_orContext* MiniDecafParser::logical_or(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::Logical_orContext *_localctx = _tracker.createInstance<Logical_orContext>(_ctx, parentState);
  MiniDecafParser::Logical_orContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, MiniDecafParser::RuleLogical_or, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Land_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(169);
    logical_and(0);
    _ctx->stop = _input->LT(-1);
    setState(176);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LorContext>(_tracker.createInstance<Logical_orContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLogical_or);
        setState(171);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(172);
        match(MiniDecafParser::LOR);
        setState(173);
        logical_or(3); 
      }
      setState(178);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Logical_andContext ------------------------------------------------------------------

MiniDecafParser::Logical_andContext::Logical_andContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::Logical_andContext::getRuleIndex() const {
  return MiniDecafParser::RuleLogical_and;
}

void MiniDecafParser::Logical_andContext::copyFrom(Logical_andContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LandContext ------------------------------------------------------------------

std::vector<MiniDecafParser::Logical_andContext *> MiniDecafParser::LandContext::logical_and() {
  return getRuleContexts<MiniDecafParser::Logical_andContext>();
}

MiniDecafParser::Logical_andContext* MiniDecafParser::LandContext::logical_and(size_t i) {
  return getRuleContext<MiniDecafParser::Logical_andContext>(i);
}

tree::TerminalNode* MiniDecafParser::LandContext::LAND() {
  return getToken(MiniDecafParser::LAND, 0);
}

MiniDecafParser::LandContext::LandContext(Logical_andContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::LandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitLand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Equal_opContext ------------------------------------------------------------------

MiniDecafParser::EqualityContext* MiniDecafParser::Equal_opContext::equality() {
  return getRuleContext<MiniDecafParser::EqualityContext>(0);
}

MiniDecafParser::Equal_opContext::Equal_opContext(Logical_andContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Equal_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitEqual_op(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::Logical_andContext* MiniDecafParser::logical_and() {
   return logical_and(0);
}

MiniDecafParser::Logical_andContext* MiniDecafParser::logical_and(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::Logical_andContext *_localctx = _tracker.createInstance<Logical_andContext>(_ctx, parentState);
  MiniDecafParser::Logical_andContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, MiniDecafParser::RuleLogical_and, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Equal_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(180);
    equality(0);
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LandContext>(_tracker.createInstance<Logical_andContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLogical_and);
        setState(182);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(183);
        match(MiniDecafParser::LAND);
        setState(184);
        logical_and(3); 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

MiniDecafParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::EqualityContext::getRuleIndex() const {
  return MiniDecafParser::RuleEquality;
}

void MiniDecafParser::EqualityContext::copyFrom(EqualityContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqualContext ------------------------------------------------------------------

std::vector<MiniDecafParser::EqualityContext *> MiniDecafParser::EqualContext::equality() {
  return getRuleContexts<MiniDecafParser::EqualityContext>();
}

MiniDecafParser::EqualityContext* MiniDecafParser::EqualContext::equality(size_t i) {
  return getRuleContext<MiniDecafParser::EqualityContext>(i);
}

tree::TerminalNode* MiniDecafParser::EqualContext::EQ() {
  return getToken(MiniDecafParser::EQ, 0);
}

tree::TerminalNode* MiniDecafParser::EqualContext::NEQ() {
  return getToken(MiniDecafParser::NEQ, 0);
}

MiniDecafParser::EqualContext::EqualContext(EqualityContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rela_opContext ------------------------------------------------------------------

MiniDecafParser::RelationalContext* MiniDecafParser::Rela_opContext::relational() {
  return getRuleContext<MiniDecafParser::RelationalContext>(0);
}

MiniDecafParser::Rela_opContext::Rela_opContext(EqualityContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Rela_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitRela_op(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::EqualityContext* MiniDecafParser::equality() {
   return equality(0);
}

MiniDecafParser::EqualityContext* MiniDecafParser::equality(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, parentState);
  MiniDecafParser::EqualityContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, MiniDecafParser::RuleEquality, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Rela_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(191);
    relational(0);
    _ctx->stop = _input->LT(-1);
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<EqualContext>(_tracker.createInstance<EqualityContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleEquality);
        setState(193);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(194);
        _la = _input->LA(1);
        if (!(_la == MiniDecafParser::EQ

        || _la == MiniDecafParser::NEQ)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(195);
        equality(3); 
      }
      setState(200);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalContext ------------------------------------------------------------------

MiniDecafParser::RelationalContext::RelationalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::RelationalContext::getRuleIndex() const {
  return MiniDecafParser::RuleRelational;
}

void MiniDecafParser::RelationalContext::copyFrom(RelationalContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompareContext ------------------------------------------------------------------

std::vector<MiniDecafParser::RelationalContext *> MiniDecafParser::CompareContext::relational() {
  return getRuleContexts<MiniDecafParser::RelationalContext>();
}

MiniDecafParser::RelationalContext* MiniDecafParser::CompareContext::relational(size_t i) {
  return getRuleContext<MiniDecafParser::RelationalContext>(i);
}

tree::TerminalNode* MiniDecafParser::CompareContext::LT() {
  return getToken(MiniDecafParser::LT, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::LE() {
  return getToken(MiniDecafParser::LE, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::GT() {
  return getToken(MiniDecafParser::GT, 0);
}

tree::TerminalNode* MiniDecafParser::CompareContext::GE() {
  return getToken(MiniDecafParser::GE, 0);
}

MiniDecafParser::CompareContext::CompareContext(RelationalContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_opContext ------------------------------------------------------------------

MiniDecafParser::AddContext* MiniDecafParser::Add_opContext::add() {
  return getRuleContext<MiniDecafParser::AddContext>(0);
}

MiniDecafParser::Add_opContext::Add_opContext(RelationalContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Add_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitAdd_op(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::RelationalContext* MiniDecafParser::relational() {
   return relational(0);
}

MiniDecafParser::RelationalContext* MiniDecafParser::relational(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::RelationalContext *_localctx = _tracker.createInstance<RelationalContext>(_ctx, parentState);
  MiniDecafParser::RelationalContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, MiniDecafParser::RuleRelational, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Add_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(202);
    add(0);
    _ctx->stop = _input->LT(-1);
    setState(209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<CompareContext>(_tracker.createInstance<RelationalContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleRelational);
        setState(204);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(205);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::LT)
          | (1ULL << MiniDecafParser::LE)
          | (1ULL << MiniDecafParser::GT)
          | (1ULL << MiniDecafParser::GE))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(206);
        relational(3); 
      }
      setState(211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

MiniDecafParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::AddContext::getRuleIndex() const {
  return MiniDecafParser::RuleAdd;
}

void MiniDecafParser::AddContext::copyFrom(AddContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddSubContext ------------------------------------------------------------------

std::vector<MiniDecafParser::AddContext *> MiniDecafParser::AddSubContext::add() {
  return getRuleContexts<MiniDecafParser::AddContext>();
}

MiniDecafParser::AddContext* MiniDecafParser::AddSubContext::add(size_t i) {
  return getRuleContext<MiniDecafParser::AddContext>(i);
}

tree::TerminalNode* MiniDecafParser::AddSubContext::Addition() {
  return getToken(MiniDecafParser::Addition, 0);
}

tree::TerminalNode* MiniDecafParser::AddSubContext::Minus() {
  return getToken(MiniDecafParser::Minus, 0);
}

MiniDecafParser::AddSubContext::AddSubContext(AddContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_opContext ------------------------------------------------------------------

MiniDecafParser::MulContext* MiniDecafParser::Mul_opContext::mul() {
  return getRuleContext<MiniDecafParser::MulContext>(0);
}

MiniDecafParser::Mul_opContext::Mul_opContext(AddContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Mul_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitMul_op(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::AddContext* MiniDecafParser::add() {
   return add(0);
}

MiniDecafParser::AddContext* MiniDecafParser::add(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, parentState);
  MiniDecafParser::AddContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, MiniDecafParser::RuleAdd, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Mul_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(213);
    mul(0);
    _ctx->stop = _input->LT(-1);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<AddContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAdd);
        setState(215);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(216);
        _la = _input->LA(1);
        if (!(_la == MiniDecafParser::Minus

        || _la == MiniDecafParser::Addition)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(217);
        add(3); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulContext ------------------------------------------------------------------

MiniDecafParser::MulContext::MulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::MulContext::getRuleIndex() const {
  return MiniDecafParser::RuleMul;
}

void MiniDecafParser::MulContext::copyFrom(MulContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Unary_opContext ------------------------------------------------------------------

MiniDecafParser::UnaryContext* MiniDecafParser::Unary_opContext::unary() {
  return getRuleContext<MiniDecafParser::UnaryContext>(0);
}

MiniDecafParser::Unary_opContext::Unary_opContext(MulContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::Unary_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitUnary_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<MiniDecafParser::MulContext *> MiniDecafParser::MulDivContext::mul() {
  return getRuleContexts<MiniDecafParser::MulContext>();
}

MiniDecafParser::MulContext* MiniDecafParser::MulDivContext::mul(size_t i) {
  return getRuleContext<MiniDecafParser::MulContext>(i);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Multiplication() {
  return getToken(MiniDecafParser::Multiplication, 0);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Division() {
  return getToken(MiniDecafParser::Division, 0);
}

tree::TerminalNode* MiniDecafParser::MulDivContext::Modulo() {
  return getToken(MiniDecafParser::Modulo, 0);
}

MiniDecafParser::MulDivContext::MulDivContext(MulContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::MulContext* MiniDecafParser::mul() {
   return mul(0);
}

MiniDecafParser::MulContext* MiniDecafParser::mul(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiniDecafParser::MulContext *_localctx = _tracker.createInstance<MulContext>(_ctx, parentState);
  MiniDecafParser::MulContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, MiniDecafParser::RuleMul, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Unary_opContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(224);
    unary();
    _ctx->stop = _input->LT(-1);
    setState(231);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<MulContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleMul);
        setState(226);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(227);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MiniDecafParser::Multiplication)
          | (1ULL << MiniDecafParser::Division)
          | (1ULL << MiniDecafParser::Modulo))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(228);
        mul(3); 
      }
      setState(233);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

MiniDecafParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniDecafParser::UnaryContext::getRuleIndex() const {
  return MiniDecafParser::RuleUnary;
}

void MiniDecafParser::UnaryContext::copyFrom(UnaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CastContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::CastContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::TypeContext* MiniDecafParser::CastContext::type() {
  return getRuleContext<MiniDecafParser::TypeContext>(0);
}

tree::TerminalNode* MiniDecafParser::CastContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::UnaryContext* MiniDecafParser::CastContext::unary() {
  return getRuleContext<MiniDecafParser::UnaryContext>(0);
}

MiniDecafParser::CastContext::CastContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::ParenContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

MiniDecafParser::ExprContext* MiniDecafParser::ParenContext::expr() {
  return getRuleContext<MiniDecafParser::ExprContext>(0);
}

tree::TerminalNode* MiniDecafParser::ParenContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

MiniDecafParser::ParenContext::ParenContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IdentifierContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

MiniDecafParser::IdentifierContext::IdentifierContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryOpContext ------------------------------------------------------------------

MiniDecafParser::UnaryContext* MiniDecafParser::UnaryOpContext::unary() {
  return getRuleContext<MiniDecafParser::UnaryContext>(0);
}

tree::TerminalNode* MiniDecafParser::UnaryOpContext::Exclamation() {
  return getToken(MiniDecafParser::Exclamation, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryOpContext::Tilde() {
  return getToken(MiniDecafParser::Tilde, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryOpContext::Minus() {
  return getToken(MiniDecafParser::Minus, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryOpContext::Multiplication() {
  return getToken(MiniDecafParser::Multiplication, 0);
}

tree::TerminalNode* MiniDecafParser::UnaryOpContext::AND() {
  return getToken(MiniDecafParser::AND, 0);
}

MiniDecafParser::UnaryOpContext::UnaryOpContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::FuncCallContext::Identifier() {
  return getToken(MiniDecafParser::Identifier, 0);
}

tree::TerminalNode* MiniDecafParser::FuncCallContext::Lparen() {
  return getToken(MiniDecafParser::Lparen, 0);
}

tree::TerminalNode* MiniDecafParser::FuncCallContext::Rparen() {
  return getToken(MiniDecafParser::Rparen, 0);
}

std::vector<MiniDecafParser::ExprContext *> MiniDecafParser::FuncCallContext::expr() {
  return getRuleContexts<MiniDecafParser::ExprContext>();
}

MiniDecafParser::ExprContext* MiniDecafParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<MiniDecafParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MiniDecafParser::FuncCallContext::Comma() {
  return getTokens(MiniDecafParser::Comma);
}

tree::TerminalNode* MiniDecafParser::FuncCallContext::Comma(size_t i) {
  return getToken(MiniDecafParser::Comma, i);
}

MiniDecafParser::FuncCallContext::FuncCallContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* MiniDecafParser::IntegerContext::Integer() {
  return getToken(MiniDecafParser::Integer, 0);
}

MiniDecafParser::IntegerContext::IntegerContext(UnaryContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MiniDecafParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
MiniDecafParser::UnaryContext* MiniDecafParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 28, MiniDecafParser::RuleUnary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(261);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::UnaryOpContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(234);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(235);
      unary();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::CastContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(236);
      match(MiniDecafParser::Lparen);
      setState(237);
      type();
      setState(238);
      match(MiniDecafParser::Rparen);
      setState(239);
      unary();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::FuncCallContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(241);
      match(MiniDecafParser::Identifier);
      setState(242);
      match(MiniDecafParser::Lparen);
      setState(248);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(243);
          expr();
          setState(244);
          match(MiniDecafParser::Comma); 
        }
        setState(250);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      }
      setState(252);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MiniDecafParser::Lparen)
        | (1ULL << MiniDecafParser::Minus)
        | (1ULL << MiniDecafParser::Exclamation)
        | (1ULL << MiniDecafParser::Tilde)
        | (1ULL << MiniDecafParser::Multiplication)
        | (1ULL << MiniDecafParser::AND)
        | (1ULL << MiniDecafParser::Integer)
        | (1ULL << MiniDecafParser::Identifier))) != 0)) {
        setState(251);
        expr();
      }
      setState(254);
      match(MiniDecafParser::Rparen);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::ParenContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(255);
      match(MiniDecafParser::Lparen);
      setState(256);
      expr();
      setState(257);
      match(MiniDecafParser::Rparen);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::IdentifierContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(259);
      match(MiniDecafParser::Identifier);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<UnaryContext *>(_tracker.createInstance<MiniDecafParser::IntegerContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(260);
      match(MiniDecafParser::Integer);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MiniDecafParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniDecafParser::TypeContext::Int() {
  return getToken(MiniDecafParser::Int, 0);
}

std::vector<tree::TerminalNode *> MiniDecafParser::TypeContext::Multiplication() {
  return getTokens(MiniDecafParser::Multiplication);
}

tree::TerminalNode* MiniDecafParser::TypeContext::Multiplication(size_t i) {
  return getToken(MiniDecafParser::Multiplication, i);
}


size_t MiniDecafParser::TypeContext::getRuleIndex() const {
  return MiniDecafParser::RuleType;
}


antlrcpp::Any MiniDecafParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniDecafVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

MiniDecafParser::TypeContext* MiniDecafParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, MiniDecafParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(MiniDecafParser::Int);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniDecafParser::Multiplication) {
      setState(264);
      match(MiniDecafParser::Multiplication);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MiniDecafParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return logical_orSempred(dynamic_cast<Logical_orContext *>(context), predicateIndex);
    case 9: return logical_andSempred(dynamic_cast<Logical_andContext *>(context), predicateIndex);
    case 10: return equalitySempred(dynamic_cast<EqualityContext *>(context), predicateIndex);
    case 11: return relationalSempred(dynamic_cast<RelationalContext *>(context), predicateIndex);
    case 12: return addSempred(dynamic_cast<AddContext *>(context), predicateIndex);
    case 13: return mulSempred(dynamic_cast<MulContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::logical_orSempred(Logical_orContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::logical_andSempred(Logical_andContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::equalitySempred(EqualityContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::relationalSempred(RelationalContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::addSempred(AddContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MiniDecafParser::mulSempred(MulContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MiniDecafParser::_decisionToDFA;
atn::PredictionContextCache MiniDecafParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MiniDecafParser::_atn;
std::vector<uint16_t> MiniDecafParser::_serializedATN;

std::vector<std::string> MiniDecafParser::_ruleNames = {
  "prog", "func", "blockItem", "globalDecl", "declaration", "stmt", "expr", 
  "conditional", "logical_or", "logical_and", "equality", "relational", 
  "add", "mul", "unary", "type"
};

std::vector<std::string> MiniDecafParser::_literalNames = {
  "", "'='", "'int'", "'return'", "'if'", "'else'", "'for'", "'while'", 
  "'do'", "'break'", "'continue'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
  "','", "';'", "'?'", "':'", "'-'", "'!'", "'~'", "'+'", "'*'", "'&'", 
  "'/'", "'%'", "'&&'", "'||'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> MiniDecafParser::_symbolicNames = {
  "", "", "Int", "Return", "If", "Else", "For", "While", "Do", "Break", 
  "Continue", "Lparen", "Rparen", "Lbrkt", "Rbrkt", "Lbrace", "Rbrace", 
  "Comma", "Semicolon", "Question", "Colon", "Minus", "Exclamation", "Tilde", 
  "Addition", "Multiplication", "AND", "Division", "Modulo", "LAND", "LOR", 
  "EQ", "NEQ", "LT", "LE", "GT", "GE", "Integer", "Identifier", "WS"
};

dfa::Vocabulary MiniDecafParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MiniDecafParser::_tokenNames;

MiniDecafParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x29, 0x111, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x27, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x2a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x35, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x38, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x3d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x42, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x45, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x49, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4f, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x55, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5b, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x62, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x6c, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x70, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x73, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x7a, 0xa, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x7e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x82, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x99, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xa0, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa9, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xb1, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0xb4, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xbc, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0xbf, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x7, 0xc, 0xc7, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xca, 0xb, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0xd2, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xd5, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xdd, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0xe0, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xe8, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xeb, 
    0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xf9, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xfc, 0xb, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xff, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x108, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x10c, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0x10f, 0xb, 0x11, 0x3, 0x11, 0x2, 0x8, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x7, 0x3, 0x2, 0x21, 0x22, 0x3, 0x2, 
    0x23, 0x26, 0x4, 0x2, 0x17, 0x17, 0x1a, 0x1a, 0x4, 0x2, 0x1b, 0x1b, 
    0x1d, 0x1e, 0x4, 0x2, 0x17, 0x19, 0x1b, 0x1c, 0x2, 0x129, 0x2, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x50, 0x3, 0x2, 0x2, 0x2, 0xa, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x98, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0x12, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x20, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x27, 0x5, 0x4, 0x3, 0x2, 0x23, 0x24, 0x5, 0x8, 0x5, 0x2, 
    0x24, 0x25, 0x7, 0x14, 0x2, 0x2, 0x25, 0x27, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x26, 0x23, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2c, 0x7, 0x2, 0x2, 0x3, 0x2c, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x5, 0x20, 0x11, 0x2, 0x2e, 0x2f, 0x7, 0x28, 0x2, 0x2, 
    0x2f, 0x36, 0x7, 0xd, 0x2, 0x2, 0x30, 0x31, 0x5, 0x20, 0x11, 0x2, 0x31, 
    0x32, 0x7, 0x28, 0x2, 0x2, 0x32, 0x33, 0x7, 0x13, 0x2, 0x2, 0x33, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 0x2, 0x2, 0x35, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3a, 0x5, 0x20, 0x11, 0x2, 0x3a, 0x3b, 0x7, 0x28, 0x2, 0x2, 
    0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x48, 
    0x7, 0xe, 0x2, 0x2, 0x3f, 0x43, 0x7, 0x11, 0x2, 0x2, 0x40, 0x42, 0x5, 
    0x6, 0x4, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x49, 0x7, 0x12, 0x2, 0x2, 0x47, 0x49, 0x7, 0x14, 0x2, 0x2, 0x48, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4f, 0x5, 0xc, 0x7, 0x2, 0x4b, 0x4c, 0x5, 
    0xa, 0x6, 0x2, 0x4c, 0x4d, 0x7, 0x14, 0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0x20, 0x11, 0x2, 
    0x51, 0x54, 0x7, 0x28, 0x2, 0x2, 0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 0x53, 
    0x55, 0x7, 0x27, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x9, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0x20, 0x11, 0x2, 0x57, 0x5a, 0x7, 0x28, 0x2, 0x2, 0x58, 0x59, 0x7, 0x3, 
    0x2, 0x2, 0x59, 0x5b, 0x5, 0xe, 0x8, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x7, 0x5, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0xe, 0x8, 0x2, 0x5e, 
    0x5f, 0x7, 0x14, 0x2, 0x2, 0x5f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 
    0x5, 0xe, 0x8, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x99, 0x7, 0x14, 
    0x2, 0x2, 0x64, 0x65, 0x7, 0x6, 0x2, 0x2, 0x65, 0x66, 0x7, 0xd, 0x2, 
    0x2, 0x66, 0x67, 0x5, 0xe, 0x8, 0x2, 0x67, 0x68, 0x7, 0xe, 0x2, 0x2, 
    0x68, 0x6b, 0x5, 0xc, 0x7, 0x2, 0x69, 0x6a, 0x7, 0x7, 0x2, 0x2, 0x6a, 
    0x6c, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x71, 0x7, 
    0x11, 0x2, 0x2, 0x6e, 0x70, 0x5, 0x6, 0x4, 0x2, 0x6f, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x99, 0x7, 0x12, 0x2, 0x2, 0x75, 
    0x76, 0x7, 0x8, 0x2, 0x2, 0x76, 0x79, 0x7, 0xd, 0x2, 0x2, 0x77, 0x7a, 
    0x5, 0xa, 0x6, 0x2, 0x78, 0x7a, 0x5, 0xe, 0x8, 0x2, 0x79, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x14, 0x2, 
    0x2, 0x7c, 0x7e, 0x5, 0xe, 0x8, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x81, 0x7, 0x14, 0x2, 0x2, 0x80, 0x82, 0x5, 0xe, 0x8, 0x2, 0x81, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xe, 0x2, 0x2, 0x84, 0x99, 0x5, 0xc, 
    0x7, 0x2, 0x85, 0x86, 0x7, 0x9, 0x2, 0x2, 0x86, 0x87, 0x7, 0xd, 0x2, 
    0x2, 0x87, 0x88, 0x5, 0xe, 0x8, 0x2, 0x88, 0x89, 0x7, 0xe, 0x2, 0x2, 
    0x89, 0x8a, 0x5, 0xc, 0x7, 0x2, 0x8a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x7, 0xa, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0xc, 0x7, 0x2, 0x8d, 0x8e, 
    0x7, 0x9, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0xd, 0x2, 0x2, 0x8f, 0x90, 0x5, 
    0xe, 0x8, 0x2, 0x90, 0x91, 0x7, 0xe, 0x2, 0x2, 0x91, 0x92, 0x7, 0x14, 
    0x2, 0x2, 0x92, 0x99, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0xb, 0x2, 
    0x2, 0x94, 0x99, 0x7, 0x14, 0x2, 0x2, 0x95, 0x96, 0x7, 0xc, 0x2, 0x2, 
    0x96, 0x99, 0x7, 0x14, 0x2, 0x2, 0x97, 0x99, 0x7, 0x14, 0x2, 0x2, 0x98, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x98, 0x61, 0x3, 0x2, 0x2, 0x2, 0x98, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x98, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x85, 0x3, 0x2, 0x2, 0x2, 0x98, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x93, 0x3, 0x2, 0x2, 0x2, 0x98, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x5, 0x1e, 0x10, 0x2, 0x9b, 0x9c, 0x7, 0x3, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0xe, 0x8, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 
    0x5, 0x10, 0x9, 0x2, 0x9f, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x12, 
    0xa, 0x2, 0xa2, 0xa3, 0x7, 0x15, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0xe, 0x8, 
    0x2, 0xa4, 0xa5, 0x7, 0x16, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x10, 0x9, 0x2, 
    0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x12, 0xa, 0x2, 0xa8, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x8, 0xa, 0x1, 0x2, 0xab, 0xac, 0x5, 
    0x14, 0xb, 0x2, 0xac, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0xc, 0x4, 
    0x2, 0x2, 0xae, 0xaf, 0x7, 0x20, 0x2, 0x2, 0xaf, 0xb1, 0x5, 0x12, 0xa, 
    0x5, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0x8, 0xb, 0x1, 0x2, 0xb6, 0xb7, 0x5, 0x16, 0xc, 0x2, 0xb7, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb9, 0xc, 0x4, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x1f, 
    0x2, 0x2, 0xba, 0xbc, 0x5, 0x14, 0xb, 0x5, 0xbb, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x8, 0xc, 0x1, 0x2, 0xc1, 0xc2, 
    0x5, 0x18, 0xd, 0x2, 0xc2, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0xc, 
    0x4, 0x2, 0x2, 0xc4, 0xc5, 0x9, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x16, 
    0xc, 0x5, 0xc6, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0x17, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x8, 0xd, 0x1, 0x2, 0xcc, 0xcd, 0x5, 0x1a, 0xe, 0x2, 0xcd, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0xc, 0x4, 0x2, 0x2, 0xcf, 0xd0, 0x9, 
    0x3, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x18, 0xd, 0x5, 0xd1, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x8, 0xe, 0x1, 0x2, 0xd7, 
    0xd8, 0x5, 0x1c, 0xf, 0x2, 0xd8, 0xde, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 
    0xc, 0x4, 0x2, 0x2, 0xda, 0xdb, 0x9, 0x4, 0x2, 0x2, 0xdb, 0xdd, 0x5, 
    0x1a, 0xe, 0x5, 0xdc, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xe2, 0x8, 0xf, 0x1, 0x2, 0xe2, 0xe3, 0x5, 0x1e, 0x10, 0x2, 0xe3, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0xc, 0x4, 0x2, 0x2, 0xe5, 0xe6, 
    0x9, 0x5, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x1c, 0xf, 0x5, 0xe7, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x9, 0x6, 0x2, 0x2, 
    0xed, 0x108, 0x5, 0x1e, 0x10, 0x2, 0xee, 0xef, 0x7, 0xd, 0x2, 0x2, 0xef, 
    0xf0, 0x5, 0x20, 0x11, 0x2, 0xf0, 0xf1, 0x7, 0xe, 0x2, 0x2, 0xf1, 0xf2, 
    0x5, 0x1e, 0x10, 0x2, 0xf2, 0x108, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 
    0x28, 0x2, 0x2, 0xf4, 0xfa, 0x7, 0xd, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0xe, 
    0x8, 0x2, 0xf6, 0xf7, 0x7, 0x13, 0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 
    0x5, 0xe, 0x8, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x108, 0x7, 0xe, 
    0x2, 0x2, 0x101, 0x102, 0x7, 0xd, 0x2, 0x2, 0x102, 0x103, 0x5, 0xe, 
    0x8, 0x2, 0x103, 0x104, 0x7, 0xe, 0x2, 0x2, 0x104, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x108, 0x7, 0x28, 0x2, 0x2, 0x106, 0x108, 0x7, 0x27, 
    0x2, 0x2, 0x107, 0xec, 0x3, 0x2, 0x2, 0x2, 0x107, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x107, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x7, 0x4, 0x2, 0x2, 0x10a, 
    0x10c, 0x7, 0x1b, 0x2, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x26, 0x28, 0x36, 0x3c, 0x43, 0x48, 0x4e, 
    0x54, 0x5a, 0x61, 0x6b, 0x71, 0x79, 0x7d, 0x81, 0x98, 0x9f, 0xa8, 0xb2, 
    0xbd, 0xc8, 0xd3, 0xde, 0xe9, 0xfa, 0xfe, 0x107, 0x10d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MiniDecafParser::Initializer MiniDecafParser::_init;
